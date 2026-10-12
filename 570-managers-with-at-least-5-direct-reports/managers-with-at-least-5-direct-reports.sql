# Write your MySQL query statement below
select e1.name
from Employee as e1 join Employee as e2
on e1.id=e2.managerId
group by e1.id,e1.name
having count(*) >=5;

-- GROUP BY e1.id, e1.name means creates groups by taking 2 attribute in account

-- COUNT(*) counts all rows in each group.
-- >= 5 checks whether that group contains at least five rows.
-- HAVING removes groups that don't satisfy the condition.