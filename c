<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Restro Clothing</title>

    <style>
        body {
            margin: 0;
            font-family: Arial, Helvetica, sans-serif;
        }

        header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 15px 20px;
            background: black;
            color: white;
        }

        header img {
            height: 45px;
        }

        nav a {
            color: white;
            margin-left: 15px;
            font-size: 14px;
            margin-right: 10px;
            padding-right: 30px;
            text-decoration: none;
        }

        .model {
            width: 100%;
            display: block;
        }

        .order {
            text-align: center;
        }

        .order h2 {
            font-size: 30px;
            margin-bottom: 15px;
        }

        .shirt {
            width: 600px;
        }

        .order h3 {
            padding: 0;
        }
    </style>
</head>
<body>

<header>
    <img src="images/restro.png" alt="Restro Logo">
    <nav>
        <a href="#">Home</a>
        <a href="#">Products</a>
        <a href="#">Contact</a>
        <a href="#">Size Chart</a>
    </nav>
</header>

<img src="images/model.png" alt="Model Image" class="model">

<section class="order">
    <h2>ORDER NOW!!</h2>

  
    <img src="images/SHIRT.png" class="shirt" alt="Restro Shirt" usemap="#workmap">

    <map name="workmap">
        <area shape="rect" coords="0,0,600,600" href="product.html" alt="Go to product page">
    </map>

    <h3>RESTRO LIVIN THE DREAM</h3>
    <h4>₱499 PHP</h4>
</section>

</body>
</html>
