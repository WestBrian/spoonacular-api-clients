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

// GetIngredientInformation200ResponseNutrition struct for GetIngredientInformation200ResponseNutrition
type GetIngredientInformation200ResponseNutrition struct {
	Nutrients []ParseIngredients200ResponseInnerNutritionNutrientsInner `json:"nutrients"`
	Properties []ParseIngredients200ResponseInnerNutritionPropertiesInner `json:"properties"`
	CaloricBreakdown ParseIngredients200ResponseInnerNutritionCaloricBreakdown `json:"caloricBreakdown"`
	WeightPerServing ParseIngredients200ResponseInnerNutritionWeightPerServing `json:"weightPerServing"`
}

// NewGetIngredientInformation200ResponseNutrition instantiates a new GetIngredientInformation200ResponseNutrition object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetIngredientInformation200ResponseNutrition(nutrients []ParseIngredients200ResponseInnerNutritionNutrientsInner, properties []ParseIngredients200ResponseInnerNutritionPropertiesInner, caloricBreakdown ParseIngredients200ResponseInnerNutritionCaloricBreakdown, weightPerServing ParseIngredients200ResponseInnerNutritionWeightPerServing) *GetIngredientInformation200ResponseNutrition {
	this := GetIngredientInformation200ResponseNutrition{}
	this.Nutrients = nutrients
	this.Properties = properties
	this.CaloricBreakdown = caloricBreakdown
	this.WeightPerServing = weightPerServing
	return &this
}

// NewGetIngredientInformation200ResponseNutritionWithDefaults instantiates a new GetIngredientInformation200ResponseNutrition object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetIngredientInformation200ResponseNutritionWithDefaults() *GetIngredientInformation200ResponseNutrition {
	this := GetIngredientInformation200ResponseNutrition{}
	return &this
}

// GetNutrients returns the Nutrients field value
func (o *GetIngredientInformation200ResponseNutrition) GetNutrients() []ParseIngredients200ResponseInnerNutritionNutrientsInner {
	if o == nil {
		var ret []ParseIngredients200ResponseInnerNutritionNutrientsInner
		return ret
	}

	return o.Nutrients
}

// GetNutrientsOk returns a tuple with the Nutrients field value
// and a boolean to check if the value has been set.
func (o *GetIngredientInformation200ResponseNutrition) GetNutrientsOk() ([]ParseIngredients200ResponseInnerNutritionNutrientsInner, bool) {
	if o == nil {
		return nil, false
	}
	return o.Nutrients, true
}

// SetNutrients sets field value
func (o *GetIngredientInformation200ResponseNutrition) SetNutrients(v []ParseIngredients200ResponseInnerNutritionNutrientsInner) {
	o.Nutrients = v
}

// GetProperties returns the Properties field value
func (o *GetIngredientInformation200ResponseNutrition) GetProperties() []ParseIngredients200ResponseInnerNutritionPropertiesInner {
	if o == nil {
		var ret []ParseIngredients200ResponseInnerNutritionPropertiesInner
		return ret
	}

	return o.Properties
}

// GetPropertiesOk returns a tuple with the Properties field value
// and a boolean to check if the value has been set.
func (o *GetIngredientInformation200ResponseNutrition) GetPropertiesOk() ([]ParseIngredients200ResponseInnerNutritionPropertiesInner, bool) {
	if o == nil {
		return nil, false
	}
	return o.Properties, true
}

// SetProperties sets field value
func (o *GetIngredientInformation200ResponseNutrition) SetProperties(v []ParseIngredients200ResponseInnerNutritionPropertiesInner) {
	o.Properties = v
}

// GetCaloricBreakdown returns the CaloricBreakdown field value
func (o *GetIngredientInformation200ResponseNutrition) GetCaloricBreakdown() ParseIngredients200ResponseInnerNutritionCaloricBreakdown {
	if o == nil {
		var ret ParseIngredients200ResponseInnerNutritionCaloricBreakdown
		return ret
	}

	return o.CaloricBreakdown
}

// GetCaloricBreakdownOk returns a tuple with the CaloricBreakdown field value
// and a boolean to check if the value has been set.
func (o *GetIngredientInformation200ResponseNutrition) GetCaloricBreakdownOk() (*ParseIngredients200ResponseInnerNutritionCaloricBreakdown, bool) {
	if o == nil {
		return nil, false
	}
	return &o.CaloricBreakdown, true
}

// SetCaloricBreakdown sets field value
func (o *GetIngredientInformation200ResponseNutrition) SetCaloricBreakdown(v ParseIngredients200ResponseInnerNutritionCaloricBreakdown) {
	o.CaloricBreakdown = v
}

// GetWeightPerServing returns the WeightPerServing field value
func (o *GetIngredientInformation200ResponseNutrition) GetWeightPerServing() ParseIngredients200ResponseInnerNutritionWeightPerServing {
	if o == nil {
		var ret ParseIngredients200ResponseInnerNutritionWeightPerServing
		return ret
	}

	return o.WeightPerServing
}

// GetWeightPerServingOk returns a tuple with the WeightPerServing field value
// and a boolean to check if the value has been set.
func (o *GetIngredientInformation200ResponseNutrition) GetWeightPerServingOk() (*ParseIngredients200ResponseInnerNutritionWeightPerServing, bool) {
	if o == nil {
		return nil, false
	}
	return &o.WeightPerServing, true
}

// SetWeightPerServing sets field value
func (o *GetIngredientInformation200ResponseNutrition) SetWeightPerServing(v ParseIngredients200ResponseInnerNutritionWeightPerServing) {
	o.WeightPerServing = v
}

func (o GetIngredientInformation200ResponseNutrition) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["nutrients"] = o.Nutrients
	}
	if true {
		toSerialize["properties"] = o.Properties
	}
	if true {
		toSerialize["caloricBreakdown"] = o.CaloricBreakdown
	}
	if true {
		toSerialize["weightPerServing"] = o.WeightPerServing
	}
	return json.Marshal(toSerialize)
}

type NullableGetIngredientInformation200ResponseNutrition struct {
	value *GetIngredientInformation200ResponseNutrition
	isSet bool
}

func (v NullableGetIngredientInformation200ResponseNutrition) Get() *GetIngredientInformation200ResponseNutrition {
	return v.value
}

func (v *NullableGetIngredientInformation200ResponseNutrition) Set(val *GetIngredientInformation200ResponseNutrition) {
	v.value = val
	v.isSet = true
}

func (v NullableGetIngredientInformation200ResponseNutrition) IsSet() bool {
	return v.isSet
}

func (v *NullableGetIngredientInformation200ResponseNutrition) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetIngredientInformation200ResponseNutrition(val *GetIngredientInformation200ResponseNutrition) *NullableGetIngredientInformation200ResponseNutrition {
	return &NullableGetIngredientInformation200ResponseNutrition{value: val, isSet: true}
}

func (v NullableGetIngredientInformation200ResponseNutrition) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetIngredientInformation200ResponseNutrition) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


