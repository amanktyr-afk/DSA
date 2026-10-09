# Write your MySQL query statement below
select  w2.id
from weather as w1 join weather as w2
on datediff(w2.recordDate,w1.recordDate)=1
and  w2.temperature > w1.temperature;
-- DATEDIFF(w2.recordDate, w1.recordDate) = 1
-- ensures that w2 is exactly one day after w1 
