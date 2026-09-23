CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      select salary from 
      ( 
        select id,salary,dense_rank() over (order by salary desc) as rnk from Employee
      )t
    where rnk=N
    limit 1
  );
END