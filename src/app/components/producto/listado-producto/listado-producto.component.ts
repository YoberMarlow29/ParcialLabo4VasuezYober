import { Component, EventEmitter, Output } from '@angular/core';
import { DatabaseService } from '../../../services/database.service';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-listado-producto',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './listado-producto.component.html',
  styleUrl: './listado-producto.component.css'
})
export class ListadoProductoComponent {
  listaProductos: any[] = [];
  @Output() productoSeleccionado = new EventEmitter<any>();

  constructor(private service: DatabaseService) { }

  ngOnInit(): void {
    this.service.obtenerProductos().subscribe(productos => {
      this.listaProductos = productos;
    });
  }

  seleccionarProducto(producto: any): void
  {
    this.productoSeleccionado.emit(producto);
  }
}
