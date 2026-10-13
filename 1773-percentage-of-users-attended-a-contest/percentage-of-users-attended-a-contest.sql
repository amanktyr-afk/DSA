# Write your MySQL query statement below
select contest_id,round(count(*)*100.0/(select count(*) from Users),2) percentage 
from Register 
group by contest_id 
order by percentage desc,contest_id  asc;

-- do u really need to join think no becz total tuples in users we will dirct get from table and this total will not change for each group