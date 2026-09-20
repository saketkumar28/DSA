# Write your MySQL query statement below
select round(sum(tiv_2016),2) as tiv_2016 from (
    select tiv_2016,count(*) over (partition by tiv_2015) as same_tiv,count(*) over (partition by lat,lon) as same_loc from Insurance
) t 
where same_tiv>1 and same_loc=1;