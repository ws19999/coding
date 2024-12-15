SELECT date_format(trans_date, '%Y-%m') month, country, count(*) trans_count, SUM(case when state='approved' then 1 else 0 END) approved_count, SUM(amount) trans_total_amount, SUM(case when state='approved' then amount else 0 END) approved_total_amount
FROM Transactions
GROUP BY country,date_format(trans_date, '%Y-%m')
