<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <title>Bài 8: do...while in tam giác</title>
    <style>
        pre {
            font-size: 18px;
            line-height: 1.2;
        }
    </style>
</head>
<body>
    <h2>Bài 8: Sử dụng do...while để in tam giác</h2>
    <pre id="tamgiacDoWhile"></pre>

    <script>
        let tamgiac = "";
        let i = 1;
        do {
            let j = 1;
            do {
                tamgiac += "*";
                j++;
            } while (j <= i);
            tamgiac += "\n";
            i++;
        } while (i <= 5);
        document.getElementById("tamgiacDoWhile").textContent = tamgiac;
    </script>
</body>
</html>
