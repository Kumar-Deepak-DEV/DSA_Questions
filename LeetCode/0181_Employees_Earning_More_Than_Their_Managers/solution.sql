# Write your MySQL query statement below

select e.name as Employee from employee e join employee x on e.managerId = x.id where e.salary>x.salary;