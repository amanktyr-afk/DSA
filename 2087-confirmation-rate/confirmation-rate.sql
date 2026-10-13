# Write your MySQL query statement below
select s.user_id, round(count(case when action='confirmed' then 1 end)/count(*),2) as confirmation_rate 
from Signups s left join Confirmations c
on s.user_id=c.user_id
group by s.user_id
order by s.user_id asc;

-- count(case when action='confirmed' then 1 end)
-- If the condition is true, it returns 1. Otherwise, it returns NULL because there is no ELSE clause.

-- COUNT(*) → counts all rows.
-- COUNT(column_name) → counts non-NULL values.
-- COUNT(CASE WHEN condition THEN 1 END) → counts rows satisfying the condition.