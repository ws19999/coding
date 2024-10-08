SELECT
 SCORE,
 GRADE.EMP_NO,
 EMP_NAME,
 POSITION,
 EMAIL
FROM (SELECT
 EMP_NO,
 SUM(SCORE) AS SCORE
FROM HR_GRADE
GROUP BY EMP_NO
ORDER BY SUM(SCORE) DESC
LIMIT 1) AS GRADE
LEFT JOIN HR_EMPLOYEES AS EMP
ON GRADE.EMP_NO = EMP.EMP_NO
LEFT JOIN HR_DEPARTMENT AS DP
ON EMP.DEPT_ID = DP.DEPT_ID