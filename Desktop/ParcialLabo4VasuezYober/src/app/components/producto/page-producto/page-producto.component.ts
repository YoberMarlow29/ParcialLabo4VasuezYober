import { Component, OnInit } from '@angular/core';
import { ListadoProductoComponent } from '../listado-producto/listado-producto.component';
import { DetalleProductoComponent } from '../detalle-producto/detalle-producto.component';
import { InfoPaisComponent } from '../info-pais/info-pais.component';

@Component({
  selector: 'app-page-producto',
  standalone: true,
  imports: [ListadoProductoComponent,DetalleProductoComponent,InfoPaisComponent],
  templateUrl: './page-producto.component.html',
  styleUrl: './page-producto.component.css'
})
export default class PageProductoComponent implements OnInit{

  productoSeleccionado: any;
  paisSeleccionado: string | undefined;

  constructor() { }

  ngOnInit(): void { }

  mostrarDetalleProducto(producto: any) {
    this.productoSeleccionado = producto;
    this.paisSeleccionado = producto.paisOrigen;
  }

  mostrarInfoPais(pais: string) {
    this.paisSeleccionado = pais;
  }
}
