with firstorder as
(
select *, rank() over(partition by customer_id order by order_date) as rn
from Delivery )
select round(avg(case when order_date = customer_pref_delivery_date then 1 else 0 end)*100,2)
as immediate_percentage 
from firstorder
where rn=1;


-- PARTITION BY → Divide rows into groups.
-- ORDER BY → Decide the ranking order within each group.
-- RANK() → Assign ranks within each group.
-- WHERE rn = 1 → Keep the first-ranked rows.

-- case 1: Without ELSE 0
-- AVG(CASE
--     WHEN order_date = customer_pref_delivery_date THEN 1
-- END)

-- AVG() ignores NULL, so it calculates:
-- (1+1)/2=1  it is  wrong 

-- Case 2: With ELSE 0
-- AVG(CASE
--     WHEN order_date = customer_pref_delivery_date THEN 1
--     ELSE 0
-- END)

-- (1+0+1+0)/4=0.5 