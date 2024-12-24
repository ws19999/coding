SELECT b.employee_id, b.name, count(*) reports_count , ROUND(AVG(a.age),0) average_age
FROM Employees a LEFT JOIN Employees b ON (a.reports_to = b.employee_id)
WHERE b.employee_id IS NOT null
GROUP BY b.employee_id
ORDER BY b.employee_id