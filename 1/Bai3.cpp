<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bài Tập JavaScript Cơ Bản</title>
    <style>
        .chao-ong {
            text-decoration: underline; 
        }
        .chao-ban {
            color: red; 
        }
    </style>
</head>
<body>
    <h1>Bài 3: Chia các số từ 1 đến 100</h1>
    <div id="greetings"></div>
    <script>
        let greetingsDiv = document.getElementById("greetings");
        
        for (let i = 1; i <= 100; i++) {
            if (i % 3 === 0 && i % 5 === 0) {
                greetingsDiv.innerHTML += "<span class='chao-ban'>chao ban " + i + "</span><br>";
            } 
            else if (i % 3 === 0) {
                greetingsDiv.innerHTML += "<span class='chao-ong'>chao ong " + i + "</span><br>";
            } 
            else if (i % 5 === 0) {
                greetingsDiv.innerHTML += "chao ba " + i + "<br>";
            }
        }
    </script>
</body>
</html>
