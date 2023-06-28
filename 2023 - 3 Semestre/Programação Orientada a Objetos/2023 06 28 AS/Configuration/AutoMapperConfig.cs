using AutoMapper;
using Domain.DTOs;
using Domain.Entities;
using Domain.ViewModels;

namespace Configuration
{
    public class AutoMapperDTOs : Profile
    {
        public AutoMapperDTOs()
        {
            CreateMap<Autor, AutorDTO>().PreserveReferences().MaxDepth(0);
            CreateMap<Livro, LivroDTO>().PreserveReferences().MaxDepth(0);
            CreateMap<Usuario, UsuarioDTO>().PreserveReferences().MaxDepth(0);
        }
    }

    public class AutoMapperViewModels : Profile
    {
        public AutoMapperViewModels()
        {
            CreateMap<AutorViewModel, Autor>();
            CreateMap<LivroViewModel, Livro>();
            CreateMap<UsuarioViewModel, Usuario>();
        }
    }
}