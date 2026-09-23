# Write your MySQL query statement below
with daily as (
    select visited_on,sum(amount) as daily_total from customer group by visited_on
)

select c1.visited_on,sum(c2.daily_total) as amount,round(sum(c2.daily_total)/7,2) as average_amount from daily c1 join daily c2 on c2.visited_on between c1.visited_on - interval 6 day and c1.visited_on group by c1.visited_on having count(distinct c2.visited_on)=7 order by c1.visited_on;