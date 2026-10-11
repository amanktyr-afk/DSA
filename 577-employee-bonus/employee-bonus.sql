select name,bonus
from employee e left join Bonus b
on  e.empid=b.empid
WHERE IFNULL(bonus, 0) < 1000;



