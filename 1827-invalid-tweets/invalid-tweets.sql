# Write your MySQL query statement below
-- LENGTH() → counts bytes
-- CHAR_LENGTH() → counts characters
-- LENGTH(24); MySQL converts the number 24 to a string ('24') and then calculates its byte length.
-- char_length(24) o/p-->2 
select tweet_id
from tweets
where char_length(content) >15;