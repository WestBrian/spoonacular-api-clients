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
import com.spoonacular.client.model.SearchGroceryProductsByUPC200ResponseServings;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

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
 * SearchMenuItems200ResponseMenuItemsInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-09-09T18:25:28.115+02:00[Europe/Berlin]")
public class SearchMenuItems200ResponseMenuItemsInner {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_TITLE = "title";
  @SerializedName(SERIALIZED_NAME_TITLE)
  private String title;

  public static final String SERIALIZED_NAME_RESTAURANT_CHAIN = "restaurantChain";
  @SerializedName(SERIALIZED_NAME_RESTAURANT_CHAIN)
  private String restaurantChain;

  public static final String SERIALIZED_NAME_IMAGE = "image";
  @SerializedName(SERIALIZED_NAME_IMAGE)
  private String image;

  public static final String SERIALIZED_NAME_IMAGE_TYPE = "imageType";
  @SerializedName(SERIALIZED_NAME_IMAGE_TYPE)
  private String imageType;

  public static final String SERIALIZED_NAME_SERVINGS = "servings";
  @SerializedName(SERIALIZED_NAME_SERVINGS)
  private SearchGroceryProductsByUPC200ResponseServings servings;

  public SearchMenuItems200ResponseMenuItemsInner() { 
  }

  public SearchMenuItems200ResponseMenuItemsInner id(Integer id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Integer getId() {
    return id;
  }


  public void setId(Integer id) {
    this.id = id;
  }


  public SearchMenuItems200ResponseMenuItemsInner title(String title) {
    
    this.title = title;
    return this;
  }

   /**
   * Get title
   * @return title
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getTitle() {
    return title;
  }


  public void setTitle(String title) {
    this.title = title;
  }


  public SearchMenuItems200ResponseMenuItemsInner restaurantChain(String restaurantChain) {
    
    this.restaurantChain = restaurantChain;
    return this;
  }

   /**
   * Get restaurantChain
   * @return restaurantChain
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getRestaurantChain() {
    return restaurantChain;
  }


  public void setRestaurantChain(String restaurantChain) {
    this.restaurantChain = restaurantChain;
  }


  public SearchMenuItems200ResponseMenuItemsInner image(String image) {
    
    this.image = image;
    return this;
  }

   /**
   * Get image
   * @return image
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getImage() {
    return image;
  }


  public void setImage(String image) {
    this.image = image;
  }


  public SearchMenuItems200ResponseMenuItemsInner imageType(String imageType) {
    
    this.imageType = imageType;
    return this;
  }

   /**
   * Get imageType
   * @return imageType
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getImageType() {
    return imageType;
  }


  public void setImageType(String imageType) {
    this.imageType = imageType;
  }


  public SearchMenuItems200ResponseMenuItemsInner servings(SearchGroceryProductsByUPC200ResponseServings servings) {
    
    this.servings = servings;
    return this;
  }

   /**
   * Get servings
   * @return servings
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public SearchGroceryProductsByUPC200ResponseServings getServings() {
    return servings;
  }


  public void setServings(SearchGroceryProductsByUPC200ResponseServings servings) {
    this.servings = servings;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SearchMenuItems200ResponseMenuItemsInner searchMenuItems200ResponseMenuItemsInner = (SearchMenuItems200ResponseMenuItemsInner) o;
    return Objects.equals(this.id, searchMenuItems200ResponseMenuItemsInner.id) &&
        Objects.equals(this.title, searchMenuItems200ResponseMenuItemsInner.title) &&
        Objects.equals(this.restaurantChain, searchMenuItems200ResponseMenuItemsInner.restaurantChain) &&
        Objects.equals(this.image, searchMenuItems200ResponseMenuItemsInner.image) &&
        Objects.equals(this.imageType, searchMenuItems200ResponseMenuItemsInner.imageType) &&
        Objects.equals(this.servings, searchMenuItems200ResponseMenuItemsInner.servings);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, title, restaurantChain, image, imageType, servings);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchMenuItems200ResponseMenuItemsInner {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    restaurantChain: ").append(toIndentedString(restaurantChain)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    imageType: ").append(toIndentedString(imageType)).append("\n");
    sb.append("    servings: ").append(toIndentedString(servings)).append("\n");
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
    openapiFields.add("id");
    openapiFields.add("title");
    openapiFields.add("restaurantChain");
    openapiFields.add("image");
    openapiFields.add("imageType");
    openapiFields.add("servings");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("id");
    openapiRequiredFields.add("title");
    openapiRequiredFields.add("restaurantChain");
    openapiRequiredFields.add("image");
    openapiRequiredFields.add("imageType");
  }

 /**
  * Validates the JSON Object and throws an exception if issues found
  *
  * @param jsonObj JSON Object
  * @throws IOException if the JSON Object is invalid with respect to SearchMenuItems200ResponseMenuItemsInner
  */
  public static void validateJsonObject(JsonObject jsonObj) throws IOException {
      if (jsonObj == null) {
        if (SearchMenuItems200ResponseMenuItemsInner.openapiRequiredFields.isEmpty()) {
          return;
        } else { // has required fields
          throw new IllegalArgumentException(String.format("The required field(s) %s in SearchMenuItems200ResponseMenuItemsInner is not found in the empty JSON string", SearchMenuItems200ResponseMenuItemsInner.openapiRequiredFields.toString()));
        }
      }

      Set<Entry<String, JsonElement>> entries = jsonObj.entrySet();
      // check to see if the JSON string contains additional fields
      for (Entry<String, JsonElement> entry : entries) {
        if (!SearchMenuItems200ResponseMenuItemsInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SearchMenuItems200ResponseMenuItemsInner` properties. JSON: %s", entry.getKey(), jsonObj.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : SearchMenuItems200ResponseMenuItemsInner.openapiRequiredFields) {
        if (jsonObj.get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonObj.toString()));
        }
      }
      if (jsonObj.get("title") != null && !jsonObj.get("title").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `title` to be a primitive type in the JSON string but got `%s`", jsonObj.get("title").toString()));
      }
      if (jsonObj.get("restaurantChain") != null && !jsonObj.get("restaurantChain").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `restaurantChain` to be a primitive type in the JSON string but got `%s`", jsonObj.get("restaurantChain").toString()));
      }
      if (jsonObj.get("image") != null && !jsonObj.get("image").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `image` to be a primitive type in the JSON string but got `%s`", jsonObj.get("image").toString()));
      }
      if (jsonObj.get("imageType") != null && !jsonObj.get("imageType").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `imageType` to be a primitive type in the JSON string but got `%s`", jsonObj.get("imageType").toString()));
      }
      // validate the optional field `servings`
      if (jsonObj.getAsJsonObject("servings") != null) {
        SearchGroceryProductsByUPC200ResponseServings.validateJsonObject(jsonObj.getAsJsonObject("servings"));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SearchMenuItems200ResponseMenuItemsInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SearchMenuItems200ResponseMenuItemsInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SearchMenuItems200ResponseMenuItemsInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SearchMenuItems200ResponseMenuItemsInner.class));

       return (TypeAdapter<T>) new TypeAdapter<SearchMenuItems200ResponseMenuItemsInner>() {
           @Override
           public void write(JsonWriter out, SearchMenuItems200ResponseMenuItemsInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SearchMenuItems200ResponseMenuItemsInner read(JsonReader in) throws IOException {
             JsonObject jsonObj = elementAdapter.read(in).getAsJsonObject();
             validateJsonObject(jsonObj);
             return thisAdapter.fromJsonTree(jsonObj);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SearchMenuItems200ResponseMenuItemsInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SearchMenuItems200ResponseMenuItemsInner
  * @throws IOException if the JSON string is invalid with respect to SearchMenuItems200ResponseMenuItemsInner
  */
  public static SearchMenuItems200ResponseMenuItemsInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SearchMenuItems200ResponseMenuItemsInner.class);
  }

 /**
  * Convert an instance of SearchMenuItems200ResponseMenuItemsInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

