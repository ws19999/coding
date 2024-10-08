WITH TEMP AS(SELECT
 YEAR(DIFFERENTIATION_DATE) as YEAR,
 MAX(SIZE_OF_COLONY) as maxsize
FROM ECOLI_DATA
GROUP BY YEAR(DIFFERENTIATION_DATE))

SELECT
 YEAR,
 maxsize-SIZE_OF_COLONY as YEAR_DEV,
 ID
FROM ECOLI_DATA
LEFT JOIN TEMP
ON YEAR(DIFFERENTIATION_DATE) = YEAR
ORDER BY YEAR, YEAR_DEV