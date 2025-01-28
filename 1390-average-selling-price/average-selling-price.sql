# Write your MySQL query statement below
SELECT p.product_id,ifnull(round(SUM(p.price * u.units)/SUM(u.units),2),0) AS average_price
FROM
Prices p
LEFT JOIN
UnitsSold u
ON
p.product_id = u.product_id and  u.purchase_date BETWEEN p.start_date and p.end_date
GROUP BY p.product_id;