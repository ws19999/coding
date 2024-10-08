WITH SALES AS(SELECT
 BOOK_ID,
 SALES
FROM BOOK_SALES
WHERE YEAR(SALES_DATE)=2022 AND MONTH(SALES_DATE)=01
             )

SELECT
 CATEGORY,
 SUM(SALES) AS TOTAL_SALES
FROM SALES
LEFT JOIN BOOK
ON BOOK.BOOK_ID = SALES.BOOK_ID
GROUP BY CATEGORY
ORDER BY CATEGORY ASC