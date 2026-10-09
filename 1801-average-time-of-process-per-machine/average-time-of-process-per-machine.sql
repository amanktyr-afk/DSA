# Write your MySQL query statement below
select a1.machine_id,round(avg(a2.timestamp-a1.timestamp),3) as processing_time
from activity as a1 join activity as a2
on a1.machine_id=a2.machine_id
and a1.process_id=a2.process_id
where a1.activity_type='start'
and a2.activity_type='end'
group by(a1.machine_id);

# Difference Between ON and WHERE in SQL

-- 1. **ON:** Defines how rows from two tables match.
-- 2. **WHERE:** Filters rows after the join logically takes place.
-- 3. **INNER JOIN:** Conditions in ON and WHERE can often be interchanged without changing the result.
-- 4. **LEFT JOIN / RIGHT JOIN:** Moving conditions between ON and WHERE can change the result.