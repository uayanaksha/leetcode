SELECT a.customer_number from (
SELECT 
    customer_number, 
    COUNT(*) AS total_orders
FROM 
    Orders
GROUP BY 
    customer_number
ORDER BY 
    total_orders DESC
LIMIT 
    1
) as a;
