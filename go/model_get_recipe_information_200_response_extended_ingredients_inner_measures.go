/*
spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

API version: 1.1
Contact: mail@spoonacular.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures struct for GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures
type GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures struct {
	Metric GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric `json:"metric"`
	Us GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric `json:"us"`
}

// NewGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures instantiates a new GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures(metric GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric, us GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric) *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures {
	this := GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures{}
	this.Metric = metric
	this.Us = us
	return &this
}

// NewGetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresWithDefaults instantiates a new GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresWithDefaults() *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures {
	this := GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures{}
	return &this
}

// GetMetric returns the Metric field value
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) GetMetric() GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric {
	if o == nil {
		var ret GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric
		return ret
	}

	return o.Metric
}

// GetMetricOk returns a tuple with the Metric field value
// and a boolean to check if the value has been set.
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) GetMetricOk() (*GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Metric, true
}

// SetMetric sets field value
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) SetMetric(v GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric) {
	o.Metric = v
}

// GetUs returns the Us field value
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) GetUs() GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric {
	if o == nil {
		var ret GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric
		return ret
	}

	return o.Us
}

// GetUsOk returns a tuple with the Us field value
// and a boolean to check if the value has been set.
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) GetUsOk() (*GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Us, true
}

// SetUs sets field value
func (o *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) SetUs(v GetRecipeInformation200ResponseExtendedIngredientsInnerMeasuresMetric) {
	o.Us = v
}

func (o GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["metric"] = o.Metric
	}
	if true {
		toSerialize["us"] = o.Us
	}
	return json.Marshal(toSerialize)
}

type NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures struct {
	value *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures
	isSet bool
}

func (v NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) Get() *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures {
	return v.value
}

func (v *NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) Set(val *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) {
	v.value = val
	v.isSet = true
}

func (v NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) IsSet() bool {
	return v.isSet
}

func (v *NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures(val *GetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) *NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures {
	return &NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures{value: val, isSet: true}
}

func (v NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetRecipeInformation200ResponseExtendedIngredientsInnerMeasures) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


