# Write your MySQL query statement below
select std.student_id,std.student_name,sub.subject_name,count(ex.subject_name) as  attended_exams
from Students as std cross join Subjects as sub
 left join Examinations as ex
 on std.student_id = ex.student_id 
 and sub.subject_name = ex.subject_name
 group by std.student_id,std.student_name,sub.subject_name
 order by std.student_id,sub.subject_name;