# Write your MySQL query statement below
select round(count(*)/(select count(distinct player_id) from Activity),2) as fraction from
(
    select event_date,player_id,lead(event_date,1) over (partition by player_id order by event_date) as nextd,row_number() over (partition by player_id order by event_date) as rn from Activity
) t
where datediff(nextd,event_date)=1 and rn=1;
