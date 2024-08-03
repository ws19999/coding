SELECT
BOARD_ID,
WRITER_ID,
TITLE,
PRICE,
CASE STATUS
 WHEN 'SALE' then '판매중'
 WHEN 'DONE' then '거래완료'
 WHEN 'RESERVED' then '예약중'
 END AS STATUS
FROM USED_GOODS_BOARD
WHERE CREATED_DATE=20221005
ORDER BY BOARD_ID DESC