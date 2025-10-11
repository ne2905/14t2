<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài Tập JavaScript Cơ Bản</title>
    <style>
        .even {
            color: blue;
            text-decoration: underline;
            font-weight: bold;
        }
    </style>
</head>
<body>
    <h1>Bài 1: In ra các số từ 1 đến 50</h1>
    <div id="result"></div>
    <script>
        let resultDiv = document.getElementById("result");
        for (let i = 1; i <= 50; i++) {
            let number = document.createElement("span");
            number.textContent = i + " ";
            if (i % 2 === 0) {
                number.classList.add("even");
            }
            resultDiv.appendChild(number);
        }
    </script>
</body>
</html>
