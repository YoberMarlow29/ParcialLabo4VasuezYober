import { Component } from '@angular/core';
import { FormBuilder, FormGroup, ReactiveFormsModule, Validators } from '@angular/forms';
import { DatabaseService } from '../../../services/database.service';
import { ListadoPaisComponent } from '../../listado-pais/listado-pais.component';

@Component({
  selector: 'app-alta-producto',
  standalone: true,
  imports: [ReactiveFormsModule,ListadoPaisComponent],
  templateUrl: './alta-producto.component.html',
  styleUrl: './alta-producto.component.css'
})
export default class AltaProductoComponent {

  altaForm : FormGroup;
  selectedContinent: string = '';


  constructor(public formBuilder: FormBuilder,private auth:DatabaseService ){

    this.altaForm = this.formBuilder.group({
      codigo: ['', [Validators.required]],
      descripcion: ['', [Validators.required]],
      precio: ['', [Validators.required]],
      stock: ['', [Validators.required]],
      paisOrigen: ['', [Validators.required]],
      comestible: [false, [Validators.required]],
  });
}
get errorControl(){

  return this.altaForm.controls;
}
async btnAgregar() {
  if (this.altaForm.valid) {
    const producto = this.altaForm.value;
    try {
      await this.auth.guardarProducto(producto);
      console.log('producto guardado con éxito!');
      this.altaForm.reset();
    } catch (error) {
      console.log('Error al guardar el producto:', error);
    }
  } else {
    console.log('Por favor, complete todos los campos correctamente.');
  }
}

onCountrySelect(country: any) {
  this.altaForm.controls['paisOrigen'].setValue(country.name.common);
}
onContinentSelect(event: Event) {
  const selectElement = event.target as HTMLSelectElement;
  this.selectedContinent = selectElement.value;
}

}
