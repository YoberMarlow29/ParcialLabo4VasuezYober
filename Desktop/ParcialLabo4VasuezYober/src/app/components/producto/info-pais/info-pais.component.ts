import { Component, Input, SimpleChanges } from '@angular/core';
import { PaisService } from '../../../services/pais.service';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-info-pais',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './info-pais.component.html',
  styleUrl: './info-pais.component.css'
})
export class InfoPaisComponent {
  @Input() chosenCountry: string | undefined;
  countryInfo: { [key: string]: string } = {};
  isLoading = false;

  constructor(private countryServ: PaisService) {}

  ngOnChanges(changes: SimpleChanges) {
    if (changes['chosenCountry'] && this.chosenCountry) {
      this.getInfoPais(this.chosenCountry);
    }
  }

  getInfoPais(name: string) {
    this.isLoading = true;
    this.countryServ.getByName(name).subscribe({
      next: (res: any) => {
        if (res.length > 0) {
          const country = res[0];
          this.countryInfo['name'] = country.name.common;
          this.countryInfo['cca3'] = country.cca3;
          this.countryInfo['capital'] = country.capital ? country.capital[0] : 'N/A';
          this.countryInfo['subregion'] = country.subregion;
          this.countryInfo['flag'] = country.flags.svg;
        }
        this.isLoading = false;
      },
      error: (err) => {
        console.error(err);
        this.isLoading = false;
      }
    });
  }
}
