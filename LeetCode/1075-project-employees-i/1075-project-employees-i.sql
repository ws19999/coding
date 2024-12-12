SELECT project_id, ROUND(AVG(experience_years),2) average_years
FROM Project pj LEFT JOIN Employee Ep USING(employee_id)
GROUP BY project_id