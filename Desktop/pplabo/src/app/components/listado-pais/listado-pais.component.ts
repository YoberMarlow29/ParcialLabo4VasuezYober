import { Component, EventEmitter, Input, Output, SimpleChanges } from '@angular/core';
import { PaisService } from '../../services/pais.service';
import { forkJoin } from 'rxjs';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-listado-pais',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './listado-pais.component.html',
  styleUrl: './listado-pais.component.css'
})
export class ListadoPaisComponent {
  @Input() continent: string = '';
  @Output() countryEv = new EventEmitter<any>();
  countries: Array<any> = [];
  isLoading: boolean = false;

  constructor(private countryServ: PaisService) {}

  ngOnChanges(changes: SimpleChanges) {
    if (changes['continent'] && this.continent) {
      this.loadCountries();
    }
  }

  loadCountries() {
    this.isLoading = true;
    const requests = this.countryServ.getByRegions([this.continent]);
    forkJoin(requests).subscribe((responses: any[]) => {
      let arrAux: Array<any> = [];
      responses.forEach(response => {
        arrAux = arrAux.concat(response as Array<any>);
      });
      arrAux.sort((a, b) => a.name.common > b.name.common ? 1 : -1);
      this.countries = arrAux.slice(0, 3);
      this.isLoading = false;
    }, error => {
      console.error('Error loading countries:', error);
      this.isLoading = false;
    });
  }

  onSelect(country: any) {
    this.countryEv.emit(country);
  }
}
