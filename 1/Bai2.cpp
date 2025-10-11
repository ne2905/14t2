<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài 6: Tam giác bằng for</title>
    <style>
        pre {
            font-size: 18px;
            line-height: 1.2;
        }
    </style>
</head>
<body>
    <h2>Bài 6: Sử dụng for để in tam giác</h2>
    <pre id="tamgiacFor"></pre>

    <script>
        let tamgiacFor = "";
        for (let i = 1; i <= 4; i++) {
            for (let j = 1; j <= i; j++) {
                tamgiacFor += "*";
            }
            tamgiacFor += "\n";
        }
        document.getElementById("tamgiacFor").textContent = tamgiacFor;
    </script>
</body>
</html>
