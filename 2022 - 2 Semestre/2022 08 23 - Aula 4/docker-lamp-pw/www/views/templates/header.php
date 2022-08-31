<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Projeto PHP</title>

    <!-- Link CSS -->
    <link rel="stylesheet" href="assets/css/style.css">

    <!-- Link Bootstrap -->
    <!-- Latest compiled and minified CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">

    <!-- Latest compiled JavaScript -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>

    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.8.2/font/bootstrap-icons.css">
</head>

<body>

    <header>
        <?php
        include('views/templates/carousel.php');
        ?>
        <nav class="navbar navbar-expand-sm bg-dark navbar-dark p-2">
            <?php
            include('views/templates/menu.php');
            ?>
        </nav>
    </header>

    <section>
    <div class="container p-4">