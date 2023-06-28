using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace _2023_06_28_AS.Migrations
{
    /// <inheritdoc />
    public partial class InitialCreate : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "autores",
                columns: table => new
                {
                    id = table.Column<int>(type: "INTEGER", nullable: false)
                        .Annotation("Sqlite:Autoincrement", true),
                    nome = table.Column<string>(type: "varchar(100)", nullable: false),
                    email = table.Column<string>(type: "varchar(50)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_autores", x => x.id);
                });

            migrationBuilder.CreateTable(
                name: "livros",
                columns: table => new
                {
                    id = table.Column<int>(type: "INTEGER", nullable: false)
                        .Annotation("Sqlite:Autoincrement", true),
                    titulo = table.Column<string>(type: "varchar(100)", nullable: false),
                    isbn = table.Column<string>(type: "varchar(50)", nullable: false),
                    ano_publicacao = table.Column<string>(type: "TEXT", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_livros", x => x.id);
                });

            migrationBuilder.CreateTable(
                name: "usuarios",
                columns: table => new
                {
                    id = table.Column<int>(type: "INTEGER", nullable: false)
                        .Annotation("Sqlite:Autoincrement", true),
                    nome = table.Column<string>(type: "varchar(100)", nullable: false),
                    email = table.Column<string>(type: "varchar(50)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_usuarios", x => x.id);
                });

            migrationBuilder.CreateTable(
                name: "autor_livro",
                columns: table => new
                {
                    AutorId = table.Column<int>(type: "INTEGER", nullable: false),
                    LivroId = table.Column<int>(type: "INTEGER", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_autor_livro", x => new { x.AutorId, x.LivroId });
                    table.ForeignKey(
                        name: "FK_autor_livro_autores_AutorId",
                        column: x => x.AutorId,
                        principalTable: "autores",
                        principalColumn: "id",
                        onDelete: ReferentialAction.Cascade);
                    table.ForeignKey(
                        name: "FK_autor_livro_livros_LivroId",
                        column: x => x.LivroId,
                        principalTable: "livros",
                        principalColumn: "id",
                        onDelete: ReferentialAction.Cascade);
                });

            migrationBuilder.CreateTable(
                name: "usuario_livro",
                columns: table => new
                {
                    LivroId = table.Column<int>(type: "INTEGER", nullable: false),
                    UsuarioId = table.Column<int>(type: "INTEGER", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_usuario_livro", x => new { x.LivroId, x.UsuarioId });
                    table.ForeignKey(
                        name: "FK_usuario_livro_livros_LivroId",
                        column: x => x.LivroId,
                        principalTable: "livros",
                        principalColumn: "id",
                        onDelete: ReferentialAction.Cascade);
                    table.ForeignKey(
                        name: "FK_usuario_livro_usuarios_UsuarioId",
                        column: x => x.UsuarioId,
                        principalTable: "usuarios",
                        principalColumn: "id",
                        onDelete: ReferentialAction.Cascade);
                });

            migrationBuilder.CreateIndex(
                name: "IX_autor_livro_LivroId",
                table: "autor_livro",
                column: "LivroId");

            migrationBuilder.CreateIndex(
                name: "IX_usuario_livro_UsuarioId",
                table: "usuario_livro",
                column: "UsuarioId");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "autor_livro");

            migrationBuilder.DropTable(
                name: "usuario_livro");

            migrationBuilder.DropTable(
                name: "autores");

            migrationBuilder.DropTable(
                name: "livros");

            migrationBuilder.DropTable(
                name: "usuarios");
        }
    }
}
