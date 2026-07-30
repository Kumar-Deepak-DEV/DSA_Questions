# Write your MySQL query statement below

-- select (select salary from Employee group by salary order by salary desc limit 1 offset 1) as SecondHighestSalary;

select max(salary) as SecondHighestSalary from employee where salary < (select max(salary) from employee);