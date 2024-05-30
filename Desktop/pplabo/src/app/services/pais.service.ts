import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class PaisService {

  constructor(private http: HttpClient) { }

  readonly apiPaises: string = 'https://restcountries.com/v3.1/';

  getByRegions(regions: string[]): Observable<any>[] {
    return regions.map(region => this.http.get(`${this.apiPaises}region/${region}`));
  }

  getByName(name: string): Observable<any> {
    return this.http.get(`${this.apiPaises}name/${name}`);
  }

}
