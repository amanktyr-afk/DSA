# Write your MySQL query statement below

WITH FirstLogin AS (
    SELECT *,
           MIN(event_date) OVER (
               PARTITION BY player_id
           ) AS first_date
    FROM Activity
),
PlayerLogin AS (
    SELECT *,
           LEAD(event_date) OVER (
               PARTITION BY player_id
               ORDER BY event_date
           ) AS next_date
    FROM FirstLogin
)
SELECT ROUND(
    COUNT(DISTINCT CASE
        WHEN DATEDIFF(next_date, event_date) = 1
         AND event_date = first_date
        THEN player_id
    END) * 1.0
    / COUNT(DISTINCT player_id),
    2
) AS fraction
FROM PlayerLogin;
