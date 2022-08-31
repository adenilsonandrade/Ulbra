<?php
class SiteController{
    
    public function home(){
        include('views/templates/header.php');
        include('views/page/home.php');
        include('views/templates/footer.php');
    }

    public function about(){
        include('views/templates/header.php');
        include('views/page/about.php');
        include('views/templates/footer.php');
    }

    public function products(){
        include('views/templates/header.php');
        include('views/page/products.php');
        include('views/templates/footer.php');
    }

    public function contact(){
        include('views/templates/header.php');
        include('views/page/contact.php');
        include('views/templates/footer.php');
    }

}