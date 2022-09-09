/*
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.spoonacular.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.spoonacular.client.model.MapIngredientsToGroceryProducts200ResponseInnerProductsInner;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.spoonacular.client.JSON;

/**
 * MapIngredientsToGroceryProducts200ResponseInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-09-09T18:25:28.115+02:00[Europe/Berlin]")
public class MapIngredientsToGroceryProducts200ResponseInner {
  public static final String SERIALIZED_NAME_ORIGINAL = "original";
  @SerializedName(SERIALIZED_NAME_ORIGINAL)
  private String original;

  public static final String SERIALIZED_NAME_ORIGINAL_NAME = "originalName";
  @SerializedName(SERIALIZED_NAME_ORIGINAL_NAME)
  private String originalName;

  public static final String SERIALIZED_NAME_INGREDIENT_IMAGE = "ingredientImage";
  @SerializedName(SERIALIZED_NAME_INGREDIENT_IMAGE)
  private String ingredientImage;

  public static final String SERIALIZED_NAME_META = "meta";
  @SerializedName(SERIALIZED_NAME_META)
  private List<String> meta = new ArrayList<>();

  public static final String SERIALIZED_NAME_PRODUCTS = "products";
  @SerializedName(SERIALIZED_NAME_PRODUCTS)
  private Set<MapIngredientsToGroceryProducts200ResponseInnerProductsInner> products = new LinkedHashSet<>();

  public MapIngredientsToGroceryProducts200ResponseInner() { 
  }

  public MapIngredientsToGroceryProducts200ResponseInner original(String original) {
    
    this.original = original;
    return this;
  }

   /**
   * Get original
   * @return original
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getOriginal() {
    return original;
  }


  public void setOriginal(String original) {
    this.original = original;
  }


  public MapIngredientsToGroceryProducts200ResponseInner originalName(String originalName) {
    
    this.originalName = originalName;
    return this;
  }

   /**
   * Get originalName
   * @return originalName
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getOriginalName() {
    return originalName;
  }


  public void setOriginalName(String originalName) {
    this.originalName = originalName;
  }


  public MapIngredientsToGroceryProducts200ResponseInner ingredientImage(String ingredientImage) {
    
    this.ingredientImage = ingredientImage;
    return this;
  }

   /**
   * Get ingredientImage
   * @return ingredientImage
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getIngredientImage() {
    return ingredientImage;
  }


  public void setIngredientImage(String ingredientImage) {
    this.ingredientImage = ingredientImage;
  }


  public MapIngredientsToGroceryProducts200ResponseInner meta(List<String> meta) {
    
    this.meta = meta;
    return this;
  }

  public MapIngredientsToGroceryProducts200ResponseInner addMetaItem(String metaItem) {
    this.meta.add(metaItem);
    return this;
  }

   /**
   * Get meta
   * @return meta
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public List<String> getMeta() {
    return meta;
  }


  public void setMeta(List<String> meta) {
    this.meta = meta;
  }


  public MapIngredientsToGroceryProducts200ResponseInner products(Set<MapIngredientsToGroceryProducts200ResponseInnerProductsInner> products) {
    
    this.products = products;
    return this;
  }

  public MapIngredientsToGroceryProducts200ResponseInner addProductsItem(MapIngredientsToGroceryProducts200ResponseInnerProductsInner productsItem) {
    this.products.add(productsItem);
    return this;
  }

   /**
   * Get products
   * @return products
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Set<MapIngredientsToGroceryProducts200ResponseInnerProductsInner> getProducts() {
    return products;
  }


  public void setProducts(Set<MapIngredientsToGroceryProducts200ResponseInnerProductsInner> products) {
    this.products = products;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MapIngredientsToGroceryProducts200ResponseInner mapIngredientsToGroceryProducts200ResponseInner = (MapIngredientsToGroceryProducts200ResponseInner) o;
    return Objects.equals(this.original, mapIngredientsToGroceryProducts200ResponseInner.original) &&
        Objects.equals(this.originalName, mapIngredientsToGroceryProducts200ResponseInner.originalName) &&
        Objects.equals(this.ingredientImage, mapIngredientsToGroceryProducts200ResponseInner.ingredientImage) &&
        Objects.equals(this.meta, mapIngredientsToGroceryProducts200ResponseInner.meta) &&
        Objects.equals(this.products, mapIngredientsToGroceryProducts200ResponseInner.products);
  }

  @Override
  public int hashCode() {
    return Objects.hash(original, originalName, ingredientImage, meta, products);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MapIngredientsToGroceryProducts200ResponseInner {\n");
    sb.append("    original: ").append(toIndentedString(original)).append("\n");
    sb.append("    originalName: ").append(toIndentedString(originalName)).append("\n");
    sb.append("    ingredientImage: ").append(toIndentedString(ingredientImage)).append("\n");
    sb.append("    meta: ").append(toIndentedString(meta)).append("\n");
    sb.append("    products: ").append(toIndentedString(products)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("original");
    openapiFields.add("originalName");
    openapiFields.add("ingredientImage");
    openapiFields.add("meta");
    openapiFields.add("products");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("original");
    openapiRequiredFields.add("originalName");
    openapiRequiredFields.add("ingredientImage");
    openapiRequiredFields.add("meta");
    openapiRequiredFields.add("products");
  }

 /**
  * Validates the JSON Object and throws an exception if issues found
  *
  * @param jsonObj JSON Object
  * @throws IOException if the JSON Object is invalid with respect to MapIngredientsToGroceryProducts200ResponseInner
  */
  public static void validateJsonObject(JsonObject jsonObj) throws IOException {
      if (jsonObj == null) {
        if (MapIngredientsToGroceryProducts200ResponseInner.openapiRequiredFields.isEmpty()) {
          return;
        } else { // has required fields
          throw new IllegalArgumentException(String.format("The required field(s) %s in MapIngredientsToGroceryProducts200ResponseInner is not found in the empty JSON string", MapIngredientsToGroceryProducts200ResponseInner.openapiRequiredFields.toString()));
        }
      }

      Set<Entry<String, JsonElement>> entries = jsonObj.entrySet();
      // check to see if the JSON string contains additional fields
      for (Entry<String, JsonElement> entry : entries) {
        if (!MapIngredientsToGroceryProducts200ResponseInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `MapIngredientsToGroceryProducts200ResponseInner` properties. JSON: %s", entry.getKey(), jsonObj.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : MapIngredientsToGroceryProducts200ResponseInner.openapiRequiredFields) {
        if (jsonObj.get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonObj.toString()));
        }
      }
      if (jsonObj.get("original") != null && !jsonObj.get("original").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `original` to be a primitive type in the JSON string but got `%s`", jsonObj.get("original").toString()));
      }
      if (jsonObj.get("originalName") != null && !jsonObj.get("originalName").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `originalName` to be a primitive type in the JSON string but got `%s`", jsonObj.get("originalName").toString()));
      }
      if (jsonObj.get("ingredientImage") != null && !jsonObj.get("ingredientImage").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `ingredientImage` to be a primitive type in the JSON string but got `%s`", jsonObj.get("ingredientImage").toString()));
      }
      // ensure the json data is an array
      if (jsonObj.get("meta") != null && !jsonObj.get("meta").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `meta` to be an array in the JSON string but got `%s`", jsonObj.get("meta").toString()));
      }
      JsonArray jsonArrayproducts = jsonObj.getAsJsonArray("products");
      if (jsonArrayproducts != null) {
        // ensure the json data is an array
        if (!jsonObj.get("products").isJsonArray()) {
          throw new IllegalArgumentException(String.format("Expected the field `products` to be an array in the JSON string but got `%s`", jsonObj.get("products").toString()));
        }

        // validate the optional field `products` (array)
        for (int i = 0; i < jsonArrayproducts.size(); i++) {
          MapIngredientsToGroceryProducts200ResponseInnerProductsInner.validateJsonObject(jsonArrayproducts.get(i).getAsJsonObject());
        };
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!MapIngredientsToGroceryProducts200ResponseInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'MapIngredientsToGroceryProducts200ResponseInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<MapIngredientsToGroceryProducts200ResponseInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(MapIngredientsToGroceryProducts200ResponseInner.class));

       return (TypeAdapter<T>) new TypeAdapter<MapIngredientsToGroceryProducts200ResponseInner>() {
           @Override
           public void write(JsonWriter out, MapIngredientsToGroceryProducts200ResponseInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public MapIngredientsToGroceryProducts200ResponseInner read(JsonReader in) throws IOException {
             JsonObject jsonObj = elementAdapter.read(in).getAsJsonObject();
             validateJsonObject(jsonObj);
             return thisAdapter.fromJsonTree(jsonObj);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of MapIngredientsToGroceryProducts200ResponseInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of MapIngredientsToGroceryProducts200ResponseInner
  * @throws IOException if the JSON string is invalid with respect to MapIngredientsToGroceryProducts200ResponseInner
  */
  public static MapIngredientsToGroceryProducts200ResponseInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, MapIngredientsToGroceryProducts200ResponseInner.class);
  }

 /**
  * Convert an instance of MapIngredientsToGroceryProducts200ResponseInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}
