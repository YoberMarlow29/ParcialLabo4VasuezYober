import { CommonModule } from '@angular/common';
import { Component, EventEmitter, Input, Output } from '@angular/core';

@Component({
  selector: 'app-detalle-producto',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './detalle-producto.component.html',
  styleUrl: './detalle-producto.component.css'
})
export class DetalleProductoComponent {
  @Input() producto: any;
  @Output() paisSeleccionado = new EventEmitter<string>();

  constructor() { }

  seleccionarPais(pais: string) {
    this.paisSeleccionado.emit(pais);
  }
}
