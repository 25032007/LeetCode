# Write your MySQL query statement below
SELECT euni.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUni euni
ON e.id = euni.id; 