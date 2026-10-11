# Write your MySQL query statement below
select jt.student_id,jt.student_name,jt.subject_name,count(ex.subject_name) as  attended_exams
from ( select std.student_id,std.student_name,sub.subject_name
      from Students as std  join Subjects as sub) as jt
 left join Examinations as ex
 on jt.student_id = ex.student_id 
 and jt.subject_name = ex.subject_name
 group by jt.student_id,jt.student_name,jt.subject_name
 order by jt.student_id,jt.student_name

--  in this query, you should use AND inside the ON clause, not WHERE, because you are using a LEFT JOIN and need to preserve students who attended zero exams.
-- jt.student_name	jt.subject_name	ex.subject_name
-- Amit             	Chemistry	   NULL
-- The row is preserved because LEFT JOIN keeps every row from the left side, even when no match exists.
-- Then COUNT(ex.subject_name) returns 0.