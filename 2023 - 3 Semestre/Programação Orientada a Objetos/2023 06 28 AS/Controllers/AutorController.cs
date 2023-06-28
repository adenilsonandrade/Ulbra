using Domain.DTOs;
using Domain.Entities;
using Domain.Interfaces;
using Domain.ViewModels;
using AutoMapper;
using Microsoft.AspNetCore.Mvc;

namespace WebApi.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class AutorController : ControllerBase
    {
        private readonly IAutorRepository _autorRepository;
        private readonly IAutorService _autorService;
        private readonly IMapper _mapper;

        public AutorController(IAutorRepository autorRepository, IAutorService autorService, IMapper mapper)
        {
            _autorRepository = autorRepository;
            _autorService = autorService;
            _mapper = mapper;
        }

        [HttpGet]
        public async Task<IActionResult> GetAllAsync()
        {
            var autores = _mapper.Map<IList<AutorDTO>>(await _autorRepository.GetAllAsync());
            return HttpMessageOk(autores);
        }

        [HttpGet("{id:int}")]
        public async Task<IActionResult> GetByIdAsync(int id)
        {
            var autor = _mapper.Map<AutorDTO>(await _autorRepository.GetByIdAsync(id));
            return HttpMessageOk(autor);
        }

        [HttpPost]
        public async Task<IActionResult> AddAsync(AutorViewModel model)
        {
            if (!ModelState.IsValid) return HttpMessageError("Dados incorretos");

            var autor = _mapper.Map<Autor>(model);
            var result = await _autorService.Add(autor);

            if (!result) return HttpMessageError("Dados invalidos");

            return HttpMessageOk(_mapper.Map<AutorDTO>(autor));
        }

        [HttpPut("{id:int}")]
        public async Task<IActionResult> UpdateAsync(int id, AutorViewModel model)
        {
            if (!ModelState.IsValid) return HttpMessageError("Dados incorretos");

            var autor = _mapper.Map<Autor>(model);
            autor.Id = id;
            var result = await _autorService.Update(autor);

            if (!result) return HttpMessageError("Dados invalidos");

            return HttpMessageOk(_mapper.Map<AutorDTO>(autor));
        }

        [HttpDelete("{id:int}")]
        public async Task<IActionResult> RemoveAsync(int id)
        {
            var autor = await _autorRepository.GetByIdAsync(id);

            if (autor == null) return NotFound();

            var result = await _autorService.Remove(id);

            if (!result) return HttpMessageError("Não foi possível remover o autor");

            return HttpMessageOk(id);
        }

        private IActionResult HttpMessageOk(dynamic data = null)
        {
            if (data == null)
                return NoContent();
            else
                return Ok(new
                {
                    data,
                });
        }

        private IActionResult HttpMessageError(string message = "")
        {
            return BadRequest(new
            {
                message
            });
        }
    }
}