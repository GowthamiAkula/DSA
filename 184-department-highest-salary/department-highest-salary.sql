/* Write your PL/SQL query statement below */
SELECT d.name AS Department,e.name AS Employee,e.salary AS Salary FROM Employee e
JOIN Department d
ON e.departmentId = d.id
WHERE(departmentId,Salary) IN
(SELECT departmentId,MAX(salary) FROM Employee
GROUP BY departmentId)

/* another approach
WITH cte AS
(
    SELECT d.name Department,e.name Employee , e.salary,
    MAX(e.salary) OVER(PARTITION BY d.id) AS mx_salary
    FROM
    employee e JOIN department d
    ON e.departmentId = d.id;
)
SELECT department,employee,salary FROM cte WHERE salary = mx_salary; */