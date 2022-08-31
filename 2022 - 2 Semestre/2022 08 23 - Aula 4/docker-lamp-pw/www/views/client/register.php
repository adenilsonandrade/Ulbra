<h1> Formulário de Cadastro </h1>
<form action="?controller=client&action=registerView" method="post">
    <div class="container">
        <div class="row">
            <div class="col-md-6">
                <div class="form-group">
                    <label for="name">Nome:</label>
                    <input type="text" class="form-control" required="required" name="name">
                </div>
                <div class="form-group">
                    <label for="password">Password:</label>
                    <input type="password" class="form-control" name="password">
                </div>
            </div>
            <div class="col-md-6">
                <div class="form-group">
                    <label for="phone">Telefone:</label>
                    <input type="text" class="form-control" name="phone">
                </div>
                <div class="form-group">
                    <label for="email">Email:</label>
                    <input type="email" class="form-control" required="required" name="email">
                </div>
            </div>
        </div>
        <div class="form-group">
            <label for="message">Mensagem</label>
            <textarea type="text" class="form-control" name="message"></textarea>
        </div>
        <label for="age">Ano Nascimento:</label>
        <select class="form-select">
            <option name="age" value="1990">1990</option>
            <option name="age" value="1991">1991</option>
            <option name="age" value="1992">1992</option>
            <option name="age" value="1993">1993</option>
            <option name="age" value="1994">1994</option>
            <option name="age" value="1995">1995</option>
            <option name="age" value="1996">1996</option>
            <option name="age" value="1997">1997</option>
            <option name="age" value="1998">1998</option>
            <option name="age" value="1999">1999</option>
            <option name="age" value="2000">2000</option>
        </select>
        <label for="status">Estado Civil:</label>
        <select class="form-select" multiple aria-label="multiple select example">
            <option name="status" value="solteiro" selected>Solteiro</option>
            <option name="status" value="casado">Casado</option>
            <option name="status" value="uniaoEstavel">União Estável</option>
        </select>
    </div>
    <label for="gender">Genero:</label>
    <div class="form-group">
        <div class="radio">
            <label> <input type="radio" name="gender" value="feminino" checked> Feminino</label>
        </div>
        <div class="radio">
            <label> <input type="radio" name="gender" value="masculino"> Masculino</label>
        </div>
        <div class="radio">
            <label> <input type="radio" name="gender" value="other" disabled> Outro</label>
        </div>
    </div>
    <div class="checkbox">
        <label>
            <input type="checkbox" name="accept"> Desejo receber os comunicados do site.
        </label>
    </div>
    <button type="submit" class="btn btn-primary"> Enviar </button>
    </div>
</form>