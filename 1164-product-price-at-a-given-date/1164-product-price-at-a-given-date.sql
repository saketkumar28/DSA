# Write your MySQL query statement below
select product_id,price from (
    select new_price as price,row_number() over (partition by product_id order by change_date desc) as rn,product_id from Products where change_date<='2019-08-16'
)t
where rn=1 union all

select product_id,10 from Products group by product_id having min(change_date)>'2019-08-16';
