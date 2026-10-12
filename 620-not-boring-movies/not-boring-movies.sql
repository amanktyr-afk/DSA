# Write your MySQL query statement below
select*
from cinema c
where id%2<>0 and  description<>"boring"
order by rating desc;