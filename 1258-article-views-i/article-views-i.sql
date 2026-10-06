# Write your MySQL query statement below
select distinct author_id as id
from views
where author_id=viewer_id
order by id asc;/*ASC is bydefault , if decreasing order than  "order by id desc"*/