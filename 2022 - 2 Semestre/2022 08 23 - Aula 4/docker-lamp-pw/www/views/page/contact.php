<h1>Formulário</h1>
<form class="p-4">
    <div class="mb-3 mt-3">
        <label for="nome">Nome</label>
        <input type="text" class="form-control" id="nome" placeholder="Digite seu nome" required="required" name="nome" />
    </div>
    <div class="mb-3">
        <label for="email">Email</label>
        <input type="email" class="form-control" id="email" placeholder="Digite seu email" name="email" />
    </div>
    <div class="mb-3">
        <label for="assunto">Assunto</label>
        <input type="tel" class="form-control" id="assunto" placeholder="Digite o assunto" name="fone" />
    </div>
    <div class="mb-3">
        <label for="mensagem">Mensagem</label>
        <textarea class="form-control" placeholder="Digite sua mensagem"></textarea>
    </div>
    <div class="mb-3">
        <input type="submit" class="btn buttonForm" onclick="enviarFormulario();" value="Enviar" />
    </div>
</form>