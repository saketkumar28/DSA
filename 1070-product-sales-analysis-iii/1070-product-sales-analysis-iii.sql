# Write your MySQL query statement below
select product_id,year as first_year,quantity,price from (
    select product_id,quantity,price,year,dense_rank() over (partition by product_id order by year) as rn from Sales
)t
where rn=1;