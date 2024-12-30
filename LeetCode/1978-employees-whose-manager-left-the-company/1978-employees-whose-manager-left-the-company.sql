SELECT e.employee_id
FROM Employees e LEFT JOIN Employees a ON e.manager_id = a.employee_id
WHERE e.manager_id is not null and a.employee_id is null and e.salary<30000
ORDER BY 1